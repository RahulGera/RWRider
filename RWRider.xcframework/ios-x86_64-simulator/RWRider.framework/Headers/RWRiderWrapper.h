//
//  RWRiderWrapper.h
//  RWRider
//
//  Created by Rahul Gera on 24/01/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RWRiderWrapper : NSObject
+ (instancetype)sharedInstance;
-(void)initialize;
@end

NS_ASSUME_NONNULL_END
