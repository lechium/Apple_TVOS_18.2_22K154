//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterBoard/NSObject-Protocol.h>

@class NSString, PFPosterExtensionInstance;

@protocol PBFExtensionInstanceProviding <NSObject>
- (void)relinquishExtensionInstance:(NSString *)arg1 reason:(NSString *)arg2;
- (PFPosterExtensionInstance *)acquireExtensionInstance:(NSString *)arg1 reason:(NSString *)arg2 error:(out id *)arg3;
@end

