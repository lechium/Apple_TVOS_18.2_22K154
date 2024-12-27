//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol GEOTransitArtworkDataSource;

__attribute__((visibility("hidden")))
@interface _GEOMapItemTransitInfoSnippetLabelItem : NSObject
{
    unsigned long long _type;	// 8 = 0x8
    NSString *_labelString;	// 16 = 0x10
    id <GEOTransitArtworkDataSource> _labelArtwork;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000001301347
@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> labelArtwork; // @synthesize labelArtwork=_labelArtwork;
@property(readonly, nonatomic) NSString *labelString; // @synthesize labelString=_labelString;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)initWithType:(unsigned long long)arg1 labelString:(id)arg2 labelArtwork:(id)arg3;	// IMP=0x0000000001301268

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

