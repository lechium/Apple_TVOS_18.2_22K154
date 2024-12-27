//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSArray, NSData, PKPassesXPCContainer;

@protocol PKServiceAddPassesViewControllerProtocol <NSObject>
- (void)resetBrightness;
- (void)evaluateBrightness;
- (void)ingestPasses:(NSArray *)arg1 orPassesContainer:(PKPassesXPCContainer *)arg2 orIssuerData:(NSData *)arg3 withSignature:(NSData *)arg4 fromPresentationSource:(unsigned long long)arg5;
- (void)setDisplayPropertiesWithScreenSize:(struct CGSize)arg1 scale:(double)arg2;
@end

