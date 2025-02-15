//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VOTElement, VOTElementFetcher;
@protocol VOTNameSearcherItemSourceDelegate;

@interface VOTNameSearcherElementSource : NSObject
{
    VOTElement *_baseElement;	// 8 = 0x8
    VOTElementFetcher *_elementFetcher;	// 16 = 0x10
    id <VOTNameSearcherItemSourceDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000047ee
@property(nonatomic) __weak id <VOTNameSearcherItemSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) VOTElementFetcher *elementFetcher; // @synthesize elementFetcher=_elementFetcher;
@property(retain, nonatomic) VOTElement *baseElement; // @synthesize baseElement=_baseElement;
- (double)selectSpeechDelay;	// IMP=0x0010000000004788
- (void)elementsCounted:(long long)arg1;	// IMP=0x0010000000004782
- (void)elementFetchFoundDirectTouchElements:(id)arg1;	// IMP=0x001000000000477c
- (void)elementFetchFound:(id)arg1;	// IMP=0x0010000000004776
- (void)didSearchForOpaqueElement;	// IMP=0x0010000000004770
- (void)elementsRetrieved:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0010000000004501
- (id)messageForSelectingItem:(id)arg1;	// IMP=0x0010000000004477
- (id)messageForNoMatchingItems;	// IMP=0x001000000000445a
- (id)messageForMatchingItemsCount:(long long)arg1;	// IMP=0x00100000000043e5
- (void)retrieveAllEntries:(id)arg1;	// IMP=0x0010000000004350
- (id)initWithElement:(id)arg1;	// IMP=0x001000000000426b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

