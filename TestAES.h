//
//  TestAES.h
//  Mytest
//
//  Created by 刘恪 on 2019/8/18.
//  Copyright © 2019 mz. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TestAES : NSObject
+ (NSString *)encryptStringWithString:(NSString *)string andKey:(NSString *)key;
+ (NSString *)decryptStringWithString:(NSString *)string andKey:(NSString *)key;
@end

NS_ASSUME_NONNULL_END
