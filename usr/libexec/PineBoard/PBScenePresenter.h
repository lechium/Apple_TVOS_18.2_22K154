//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PBScenePresenter : NSObject
{
    NSMutableDictionary *_scenePresenters;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000194053
@property(readonly, nonatomic, getter=_scenePresenters) NSMutableDictionary *scenePresenters; // @synthesize scenePresenters=_scenePresenters;
- (void)invalidatePresentationForElement:(id)arg1;	// IMP=0x0010000000193bbd
- (id)snapshotPresentationViewForElement:(id)arg1;	// IMP=0x00100000001938cf
- (id)presentationViewForElement:(id)arg1;	// IMP=0x0010000000193212
- (id)init;	// IMP=0x00100000001931bc

@end

