//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSUUID, SFAuthenticationApproveInfo;
@protocol _TtP16DaemoniOSLibrary32SDAuthenticationManagerInterface_;

@protocol _TtP16DaemoniOSLibrary31SDAuthenticationManagerDelegate_
- (void)manager:(id <_TtP16DaemoniOSLibrary32SDAuthenticationManagerInterface_>)arg1 didReceiveApproveRequestFor:(NSUUID *)arg2 info:(SFAuthenticationApproveInfo *)arg3;
- (void)manager:(id <_TtP16DaemoniOSLibrary32SDAuthenticationManagerInterface_>)arg1 didFailAuthenticationFor:(NSUUID *)arg2 error:(NSError *)arg3;
- (void)manager:(id <_TtP16DaemoniOSLibrary32SDAuthenticationManagerInterface_>)arg1 didCompleteAuthenticationFor:(NSUUID *)arg2;
- (void)manager:(id <_TtP16DaemoniOSLibrary32SDAuthenticationManagerInterface_>)arg1 didStartAuthenticationFor:(NSUUID *)arg2;
- (void)manager:(id <_TtP16DaemoniOSLibrary32SDAuthenticationManagerInterface_>)arg1 didFailToDisableDeviceFor:(NSUUID *)arg2 error:(NSError *)arg3;
- (void)manager:(id <_TtP16DaemoniOSLibrary32SDAuthenticationManagerInterface_>)arg1 didDisableAuthenticationFor:(NSUUID *)arg2;
- (void)manager:(id <_TtP16DaemoniOSLibrary32SDAuthenticationManagerInterface_>)arg1 didFailToEnableDeviceFor:(NSUUID *)arg2 error:(NSError *)arg3;
- (void)manager:(id <_TtP16DaemoniOSLibrary32SDAuthenticationManagerInterface_>)arg1 didEnableAuthenticationFor:(NSUUID *)arg2;
@end

