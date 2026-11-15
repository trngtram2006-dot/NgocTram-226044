#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "lib.h"
#include <stdlib.h>

//giả sử
//đối tượng 1 có giá trị là A tại vùng nhớ 0x1000
//suy ra đối tượng 1 cần 2 biến: value lưu giá trị A, next-node lưu địa chỉ của đối tượng 2
//đối tượng 2 có giá trị là B tịa vùng nhớ 0x1007
// suy ra đối tượng 1 cần 2 biến: value lưu giá trị B, next-node lưu địa chỉ của đối tượng 3
//đối tượng 3 có giá trị là C tại vùng nhớ 0x1013
// suy ra đối tượng 1 cần 2 biến: value lưu giá trị C, next-node lưu địa chỉ của đối tượng 4
//đối tượng 4 có giá trị là C tại vùng nhớ 0x1005
//suy ra đối tượng 1 cần 2 biến: value lưu giá trị D, next-node lưu địa chỉ của đối tượng 5
// Nếu không có thì lưu NULL

typedef struct
{
	int value;// giá trị của node
	void* next_node;// địa chỉ của node tiếp theo.
}node;

typedef struct
{
	node* root_node;// địa chỉ của node đầu tiên,
	int size;//số lượng node.
}linked_list;

void linked_list_init(linked_list* ll)
{
	ll->root_node = NULL;
	ll->size = 0;

}

void linked_list_add_node(linked_list* ll, int val)
{
	node* n = malloc(sizeof(node));
	n->value = val;
	n->next_node = NULL;

	if (ll->root_node == NULL)
	{
		ll->root_node = n;
	}
	else
	{
		node* temp = ll->root_node;
		//for (int i = 0; i < ll->size - 1;i++)
		//{
		//	temp = (node*)(temp->next_node);
		//}
		//temp->next_node = n;

		while (temp->next_node != NULL)
		{
			temp = (node*)(temp->next_node);
		}
		temp->next_node = n;
	}
	ll->size++;
}

void linked_list_show_all_node(linked_list* ll)
{
	node* temp = ll->root_node;
	int i = 0;
	while (temp->next_node != NULL)
	{
		printf("Gia tri cua node tai vi tri %d la %d\n", i, temp->value);
		temp = (node*)(temp->next_node);
		i++;
	}
	printf("Gia tri cua node tai vi tri %d la %d\n", i, temp->value);
}

int linked_list_get_value(linked_list* ll, int index)
{
	node* temp = ll->root_node;
	for (int i = 1;i<index-1;i++)
	{
		temp = (node*)(temp->next_node);
	}
	return temp->value;
}

void linked_list_remove_node(linked_list* ll, int index)
{
	node* temp = ll->root_node;
	if (index == 0)
	{
		ll->root_node = temp->next_node;
		free(temp);
	}
	else
	{
		node* pre_temp = ll->root_node;
		for (int i = 0; i < index;i++)
		{
			pre_temp = temp;
			temp = (node*)(temp->next_node);
		}
		pre_temp->next_node = (node*)(temp->next_node);
		free(temp);
		ll->size--;
	}
}

//void linked_list_remove_node(linked_list* ll, int index)
//{
//	if (index < 0 || index >= ll->size)
//	{
//		printf("Vi tri %d khong hop le (hop le: 0 den %d)\n", index, ll->size - 1);
//		return;
//	}
//
//	node* can_xoa;
//	if (index == 0)
//	{
//		// xoa node dau: root_node tro sang node thu 2
//		can_xoa = ll->root_node;
//		ll->root_node = (node*)(can_xoa->next_node);
//	}
//	else
//	{
//		// tim node dung truoc node can xoa (vi tri index - 1)
//		node* truoc = ll->root_node;
//		for (int i = 0; i < index - 1; i++)
//		{
//			truoc = (node*)(truoc->next_node);
//		}
//		can_xoa = (node*)(truoc->next_node);
//		truoc->next_node = can_xoa->next_node;   // noi node truoc voi node sau
//	}
//
//	free(can_xoa);       // giai phong bo nho
//	ll->size--;
//}

void linked_list_insert_node(linked_list* ll, int index, int val)
{
	node* n = malloc(sizeof(node));
	n->value = val;
	n->next_node = NULL;

	node* temp = ll->root_node;
	if (index == 0)
	{
		n->next_node = temp;
		ll->root_node = n;
	}
	else
	{
		node* pre_temp = temp;
		for (int i = 0;i < index;i++)
		{
			pre_temp = temp;
			temp = (node*)(temp->next_node);
		}
		pre_temp->next_node = n;
		n->next_node = temp;
	}
	ll->size++;
}

//void linked_list_insert_node(linked_list* ll, int index, int val)
//{
//	if (index < 0 || index > ll->size)
//	{
//		printf("Vi tri %d khong hop le (hop le: 0 den %d)\n", index, ll->size);
//		return;
//	}
//
//	node* n = malloc(sizeof(node));
//	if (n == NULL) return;
//	n->value = val;
//
//	if (index == 0)
//	{
//		// chen vao dau: node moi tro toi node dau cu
//		n->next_node = ll->root_node;
//		ll->root_node = n;
//	}
//	else
//	{
//		// tim node dung truoc vi tri can chen (vi tri index - 1)
//		node* truoc = ll->root_node;
//		for (int i = 0; i < index - 1; i++)
//		{
//			truoc = (node*)(truoc->next_node);
//		}
//		n->next_node = truoc->next_node;   // node moi tro toi node phia sau
//		truoc->next_node = n;              // node truoc tro toi node moi
//	}
//	ll->size++;
//}

void main()
{
	linked_list l;
	linked_list_init(&l);
	linked_list_add_node(&l, 10);
	linked_list_add_node(&l, 20);
	linked_list_add_node(&l, 30);
	linked_list_add_node(&l, 40);
	linked_list_add_node(&l, 50);

	linked_list_show_all_node(&l);

	int val = linked_list_get_value(&l, 3);
	printf("Val node 3: %d\n", val);

	//BTVN
	// 1. viết hàm xoá 1 node tron linked_list tại vị trí mong muốn
	// 2. viết hàm thêm 1 node vào linked_list tại vị trí mong muốn
	/**
	* @brief Hàm xóa 1 node trong linked list
	* @param (linked_list*): địa chỉ của linked list
	* @param (int): vị trí của node cần xóa
	*/
	//void linked_list_remove_node(linked_list * ll, int index);

	/**
	* @brief Hàm insert 1 node vào linked list tại ví trí bất kì
	* @param (linked_list*): địa chỉ của linked list
	* @param (int): vị trí của node cần insert
	*/
	//void linked_list_insert_node(linked_list * ll, int index, int val);

	//linked_list_insert_node(&l, 2, 99);       // chen 99 vao vi tri 2
	//printf("\n--- Sau khi them ---\n");
	//linked_list_show_all_node(&l);

	//linked_list_remove_node(&l, 3);           // xoa node o vi tri 3
	//printf("\n--- Sau khi xoa ---\n");
	//linked_list_show_all_node(&l);

	//return 0;

	linked_list_remove_node(&l, 2);
	linked_list_show_all_node(&l);

	printf("\n");
	linked_list_insert_node(&l, 3, 30);
	linked_list_show_all_node(&l);
}