//
//  UITabBarController+ZJExtension.m
//  FreeLimit1502
//
//  Created by mac on 15/5/12.
//  Copyright (c) 2015年 zhang jian. All rights reserved.
//

#import "UITabBarController+ZJExtension.h"

@implementation UITabBarController (ZJExtension)
//为标签栏控制器添加一个界面, cls传入界面对应的类
-(id)addViewControlerWithClass:(Class )cls
                         title:(NSString *)title
                         image:(NSString *)image
                   selectImage:(NSString *)selectImage
{
    //创建一个界面(包含导航)
    UIViewController *vc = [[cls alloc] init];
    vc.title = title;
    UINavigationController *nc = [[UINavigationController alloc] initWithRootViewController:vc];
    nc.tabBarItem.image = [UIImage imageNamed:image];
    //注意: iOS8需要加
    nc.tabBarItem.selectedImage = [[UIImage imageNamed:selectImage] imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
    
    //添加到tabBar中
    NSMutableArray *marr = [[NSMutableArray alloc] initWithArray:self.viewControllers];
    [marr addObject:nc];
    self.viewControllers = marr;
    
    return vc;
}
@end
