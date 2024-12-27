//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloServiceProtocol-Protocol.h>

@class NSDictionary, NSString;
@protocol CLSettingsManagerClientProtocol;

@protocol CLSettingsManagerProtocol <CLIntersiloServiceProtocol>
- (void)refresh;
- (void)flush;
- (NSDictionary *)syncgetSetValue:(id)arg1 forKey:(NSString *)arg2 withoutNotifying:(byref id <CLSettingsManagerClientProtocol>)arg3;
- (NSDictionary *)syncgetSettingsAndRegisterForUpdates:(byref id <CLSettingsManagerClientProtocol>)arg1;
- (void)unregisterForUpdates:(byref id <CLSettingsManagerClientProtocol>)arg1;
@end

