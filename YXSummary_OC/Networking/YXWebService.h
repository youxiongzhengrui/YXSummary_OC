//
//  YXWebService.h
//  YXSummary_OC
//
//  Created by xiongzhengrui on 2017/9/3.
//  Copyright © 2017年 ~YXzr~. All rights reserved.
//

#import <AFNetworking/AFNetworking.h>

#define ErrorCodeNoNetwork @"网络连接出错"

@interface YXWebService : AFHTTPSessionManager

+ (instancetype)shareInstance;
@end
