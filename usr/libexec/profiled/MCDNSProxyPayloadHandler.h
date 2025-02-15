//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCProfile;

@interface MCDNSProxyPayloadHandler
{
    MCProfile *_profile;	// 32 = 0x20
}

+ (id)internalErrorWithUnderlyingError:(id)arg1;	// IMP=0x0040000000012679
+ (id)internalError;	// IMP=0x0010000000012665
- (void).cxx_destruct;	// IMP=0x0020000000012738
- (void)remove;	// IMP=0x0010000000012732
- (void)unsetAside;	// IMP=0x001000000001272c
- (void)setAside;	// IMP=0x0010000000012726
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x001000000001271e
- (id)initWithPayload:(id)arg1 profileHandler:(id)arg2;	// IMP=0x00100000000125d6

@end

