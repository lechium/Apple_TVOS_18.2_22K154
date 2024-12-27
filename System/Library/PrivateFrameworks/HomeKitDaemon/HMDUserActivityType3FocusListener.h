//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDUserActivityType3BiomeStreamSubscriber, HMDUserType3Focus, NSString;
@protocol HMDHomeActivityStateManagerDataSource, HMDUserActivityType3FocusListenerDelegate;

__attribute__((visibility("hidden")))
@interface HMDUserActivityType3FocusListener : HMFObject
{
    id <HMDUserActivityType3FocusListenerDelegate> _delegate;	// 8 = 0x8
    id <HMDHomeActivityStateManagerDataSource> _dataSource;	// 16 = 0x10
    HMDUserActivityType3BiomeStreamSubscriber *_biomeSubscriber;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000795c88
@property(readonly, nonatomic) HMDUserActivityType3BiomeStreamSubscriber *biomeSubscriber; // @synthesize biomeSubscriber=_biomeSubscriber;
@property(readonly, nonatomic) id <HMDHomeActivityStateManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <HMDUserActivityType3FocusListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)biomeEventDidUpdate;	// IMP=0x0000000000795b9e
@property(readonly, copy, nonatomic) HMDUserType3Focus *focus;
@property(readonly, nonatomic, getter=isConfigured) _Bool configured;
- (void)unconfigure;	// IMP=0x0000000000795995
- (void)configureWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000007958d2
- (id)initWithIdentifier:(id)arg1 dataSource:(id)arg2;	// IMP=0x0000000000795768

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

