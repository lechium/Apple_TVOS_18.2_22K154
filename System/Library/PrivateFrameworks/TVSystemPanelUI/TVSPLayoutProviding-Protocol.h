//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSystemPanelUI/NSObject-Protocol.h>

@class NSArray, TVSPLayoutEnvironment, TVSPLayoutResult;

@protocol TVSPLayoutProviding <NSObject>
@property(readonly, nonatomic) NSArray *identifiers;
- (TVSPLayoutResult *)layoutResultsForEnvironment:(TVSPLayoutEnvironment *)arg1;
@end

