//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CNContactDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface CNContactDataSourceSafeDelegate : NSObject
{
    id <CNContactDataSourceDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000c8fd7
@property(nonatomic) __weak id <CNContactDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)contactDataSourceDidChange:(id)arg1;	// IMP=0x00000000000c8f09
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000000c8e8e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

