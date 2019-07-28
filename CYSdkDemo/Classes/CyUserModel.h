//
//  CyUserModel.h
//  CyBlueToothKit
//
//  Created by super on 2019/7/1.
//  Copyright © 2019 super. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CyUserModel : NSObject

+ (CyUserModel*)sharedInstance;

/**
 appId
 */
@property (nonatomic,strong) NSString * appId;

/**
 年龄
 */
@property (nonatomic,strong) NSString * name;

/**
 电话
 */
@property (nonatomic,strong) NSString * telephone;

/**
 年龄
 */
@property (nonatomic,strong) NSString* age;

/**
 性别
 */
@property (nonatomic,strong) NSString* sex;
/**
 身高
 */
@property (nonatomic,strong) NSString* height;


/**
 体重
 */
@property (nonatomic,strong) NSString* weight;

/**
 是否授权
 */
@property (nonatomic,assign) BOOL isAuthorized;

@end

NS_ASSUME_NONNULL_END
