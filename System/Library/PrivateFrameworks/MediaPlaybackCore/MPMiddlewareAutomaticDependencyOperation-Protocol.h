//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/MPMiddlewareOperation-Protocol.h>

@class NSArray, NSMapTable;

@protocol MPMiddlewareAutomaticDependencyOperation <MPMiddlewareOperation>
@property(retain, nonatomic) NSMapTable *inputOperations;
@property(readonly, nonatomic) NSArray *outputProtocols;
@property(readonly, nonatomic) NSArray *inputProtocols;
@end

