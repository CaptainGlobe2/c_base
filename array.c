/*
 * array.c
 * 
 * Copyright 2023 pc <pc@SALMANFARISH-ID>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

int main()
{
	int a[30],max,size,i;
	printf("enter the number of elements:");
	scanf("%d",&size);
	printf("enter the number of elements\n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<size;i++){
		if(max<a[i]){
			max=a[i];}
		}
		printf("max value is %d",max);
}

