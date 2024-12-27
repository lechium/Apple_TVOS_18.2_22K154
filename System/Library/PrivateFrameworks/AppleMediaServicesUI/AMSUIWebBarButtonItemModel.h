//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSUIWebAppViewModel, AMSUIWebButtonModel, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebBarButtonItemModel : NSObject
{
    AMSUIWebAppViewModel *_appViewModel;	// 8 = 0x8
    AMSUIWebButtonModel *_buttonModel;	// 16 = 0x10
    NSArray *_conditionalButtonModels;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006ec23
@property(retain, nonatomic) NSArray *conditionalButtonModels; // @synthesize conditionalButtonModels=_conditionalButtonModels;
@property(retain, nonatomic) AMSUIWebButtonModel *buttonModel; // @synthesize buttonModel=_buttonModel;
@property(retain, nonatomic) AMSUIWebAppViewModel *appViewModel; // @synthesize appViewModel=_appViewModel;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x000000000006e737

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

