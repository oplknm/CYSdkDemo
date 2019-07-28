//
//  CyUserModel.m
//  CyBlueToothKit
//
//  Created by super on 2019/7/1.
//  Copyright © 2019 super. All rights reserved.
//

#import "CyUserModel.h"

@implementation CyUserModel

//单例
+ (CyUserModel*)sharedInstance
{
    static dispatch_once_t once;
    static CyUserModel* sharedInstance;
    dispatch_once(&once, ^{
        sharedInstance = [[self alloc] init];
        [sharedInstance setDefault];
    });
    return sharedInstance;
}

-(void)setDefault
{
    _appId = @"";
    _name = @"";
    _telephone = @"";
    _age = @"20";
    _height = @"170";
    _weight = @"80";
    _sex = @"0";
    _isAuthorized = NO;
}
@end
