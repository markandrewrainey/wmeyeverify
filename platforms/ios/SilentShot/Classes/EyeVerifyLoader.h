//
//  EyeVerifyLoader.h
//  EyeprintID
//

#import "EyeVerify.h"

#import <Foundation/Foundation.h>

@interface EyeVerifyLoader : NSObject

- (void)loadEyeVerifyWithLicense:(NSString *)license;
+ (EyeVerify *)getEyeVerifyInstance;

@end
