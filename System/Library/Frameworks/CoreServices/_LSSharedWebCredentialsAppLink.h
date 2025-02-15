//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "LSAppLink.h"

@class _SWCServiceDetails;

__attribute__((visibility("hidden")))
@interface _LSSharedWebCredentialsAppLink : LSAppLink
{
    struct LSBinding _binding;	// 8 = 0x8
    _SWCServiceDetails *_serviceDetails;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000051bc0
+ (_Bool)removeAllSettingsReturningError:(id *)arg1;	// IMP=0x0060000000051a53
+ (_Bool)setSettingsSwitchState:(long long)arg1 forApplicationIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x006000000005169d
+ (long long)settingsSwitchStateForApplicationIdentifier:(id)arg1;	// IMP=0x00600000000513f0
+ (void)afterAppLinksBecomeAvailableForURL:(id)arg1 limit:(unsigned long long)arg2 performBlock:(CDUnknownBlockType)arg3;	// IMP=0x0060000000050902
+ (_Bool)_areAppLinksEnabledForServiceDetails:(id)arg1 cachedSettings:(id *)arg2;	// IMP=0x00600000000506ee
+ (_Bool)_setSWCSetting:(id)arg1 forKey:(id)arg2 withApplicationIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x00600000000503b2
+ (id)_SWCSettingsWithApplicationIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x006000000005028c
+ (id)_SWCSpecifierForSettingsWithApplicationIdentifier:(id)arg1;	// IMP=0x0060000000050144
+ (void)initialize;	// IMP=0x00600000000500fd
- (id).cxx_construct;	// IMP=0x0000000000051de7
- (void).cxx_destruct;	// IMP=0x0000000000051d9f
@property(retain, nonatomic) _SWCServiceDetails *serviceDetails; // @synthesize serviceDetails=_serviceDetails;
@property(readonly) struct LSBinding binding; // @synthesize binding=_binding;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000051c4b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000051bc8
- (_Bool)removeSettingsReturningError:(id *)arg1;	// IMP=0x00000000000518cf
- (_Bool)setBrowserSettings:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000518b3
- (id)browserSettings;	// IMP=0x0000000000051827
- (_Bool)setEnabled:(_Bool)arg1 error:(id *)arg2;	// IMP=0x0000000000051376
- (_Bool)isEnabled;	// IMP=0x0000000000051317
- (_Bool)isAlwaysEnabled;	// IMP=0x00000000000512fa
- (_Bool)_setSWCSetting:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000505ef
- (id)_SWCSettingsReturningError:(id *)arg1;	// IMP=0x00000000000502fd
- (id)_SWCSpecifierForSettings;	// IMP=0x00000000000501dc

@end

