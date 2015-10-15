//
//  UITabBarController+ZJExtension.h
//  FreeLimit1502
//
//  Created by mac on 15/5/12.
//  Copyright (c) 2015年 zhang jian. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITabBarController (ZJExtension)
//为标签栏控制器添加一个界面
-(id)addViewControlerWithClass:(Class )cls
                        title:(NSString *)title
                         image:(NSString *)image
                   selectImage:(NSString *)selectImage;
@end
