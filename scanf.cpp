#include <stdio.h>
int main()
{
	char category;
	float price;
	
	printf("商品类别有A-电子产品，B-服装\n请按顺序输入商品类别和价格，两个值中间用空格隔开:");
	scanf(" %c %f",&category,&price);
	
	switch(category) {
        case 'A':
            if (price < 500){
                printf("电子产品价格较低，无优惠");
            }
            else if (price <= 1000) {
            	printf("电子产品可享受 5%% 的优惠\n");
            }
        else {
        	printf("电子产品可享受 10%% 的优惠\n");
		}
		case 'B':
			if (price < 200) {
			    printf("服装价格较低，无优惠\n");
			}
			else if (price <= 500) {
			    printf("服装可享受 8%% 的优惠\n");
			}
			else {
                printf("服装可享受 15%%的优惠\n");
            }
            break;
        default:
        	printf("找不到该商品类别\n");
    }
}
