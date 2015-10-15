//
//  ZCInternetAPI.h
//  什么值得买
//
//  Created by 朱立焜 on 15/10/15.
//  Copyright (c) 2015年 zcill. All rights reserved.
//

#ifndef ______InternetAPI_h
#define ______InternetAPI_h

// 首页
// 精选
// GET
#define HandPickURL @"http://api.smzdm.com/v1/home/articles?have_zhuanti=1&f=iphone&s=5598d989abcc7112032&imgmode=0&v=5.11&limit=20"

// 优惠
// GET
#define DiscountURL @"http://api.smzdm.com/v1/youhui/articles?f=iphone&s=5598d989abcc7112032&imgmode=0&v=5.11&limit=20"

// tabbar
// GET
#define TabBarURL @"http://api.smzdm.com/v1/util/navigation?f=iphone&v=5.11&s=5598d989abcc7112032"

// 广告位和三个小方块
// GET
#define AdURL @"http://api.smzdm.com/v1/util/banner?s=5598d989abcc7112032&type=home&v=5.11&f=iphone"

// 左按钮商城筛选
// GET
#define ShoppingCategoryURL @"http://api.smzdm.com/v1/filter/mall?v=5.11&f=iphone&s=5598d989abcc7112032"

// 商品百科页面
// GET
#define ItemPediaMainPageURL @"http://api.smzdm.com/v1/wiki/articles?offset=0&index_show=y&imgmode=0&limit=20&v=5.11&f=iphone&s=5598d989abcc7112032"

// 商品百科
// 搜索框下热门标签
// GET
#define HotLabelURL @"http://api.smzdm.com/v1/wiki/hot_tags?f=iphone&s=5598d989abcc7112032&v=5.11&limit=20"

// 商品百科分类
//GET
#define ItemPediaCategoryURL @"http://api.smzdm.com/v1/wiki/menu?v=5.11&f=iphone&s=5598d989abcc7112032"

// 订阅页面
// POST
#define SubscribePageURL @"http://api.smzdm.com/v1/user/dingyue/articles"


#endif
