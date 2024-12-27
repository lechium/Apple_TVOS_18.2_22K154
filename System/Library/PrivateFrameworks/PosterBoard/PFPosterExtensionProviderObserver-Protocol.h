//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterBoard/NSObject-Protocol.h>

@class NSArray, NSSet, PFPosterExtensionProvider;

@protocol PFPosterExtensionProviderObserver <NSObject>

@optional
- (void)posterExtensionProvider:(PFPosterExtensionProvider *)arg1 updatedExtensionsFrom:(NSSet *)arg2 to:(NSSet *)arg3;
- (void)posterExtensionProvider:(PFPosterExtensionProvider *)arg1 foundExtensions:(NSArray *)arg2;
@end

