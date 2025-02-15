//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSFormatter;

@interface TVSettingsAppleRemoteFacade : NSObject
{
}

+ (_Bool)automaticallyNotifiesObserversForClickpadMode;	// IMP=0x004000000008f217
+ (id)sharedInstance;	// IMP=0x001000000008e893
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x002000000008f21f
@property(readonly, nonatomic) NSFormatter *sensitivityFormatter;
@property(readonly, nonatomic) NSArray *availableSensitivityValues;
@property(nonatomic) long long sensitivity;
@property(readonly, nonatomic) _Bool supportsSensitivity;
@property(readonly, nonatomic) NSFormatter *clickpadModeFormatter;
@property(readonly, nonatomic) NSArray *availableClickpadModeValues;
@property(nonatomic) unsigned long long clickpadMode;
@property(readonly, nonatomic) _Bool supportsClickpadModes;
@property(nonatomic) _Bool tvButtonLaunchesTVApp;
- (void)dealloc;	// IMP=0x001000000008ea3f
- (id)init;	// IMP=0x001000000008e8e8

@end

