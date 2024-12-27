//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString, RBSLaunchContext, RBSProcessIdentity;
@protocol OS_xpc_object;

@protocol RBPersonaManaging
- (_Bool)personaRequiredForExtensionContext:(RBSLaunchContext *)arg1 serviceDict:(NSObject<OS_xpc_object> *)arg2;
- (_Bool)isConcretePersona:(NSString *)arg1;
- (NSString *)personalPersonaUniqueString;
- (_Bool)personaForIdentity:(RBSProcessIdentity *)arg1 context:(RBSLaunchContext *)arg2 personaUID:(out unsigned int *)arg3 personaUniqueString:(out id *)arg4;
- (_Bool)personasAreSupported;
@end

