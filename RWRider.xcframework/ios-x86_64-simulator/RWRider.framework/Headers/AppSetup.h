//
//  AppSetup.h
//  RWRider
//
//  Created by Rahul Gera on 24/01/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AppSetup : NSObject
+ (instancetype)sharedInstance;
-(void)setupThirdParty;
+ (NSString*)bundleIdentifier;
+ (NSBundle*)bundle;
@end

NS_ASSUME_NONNULL_END
