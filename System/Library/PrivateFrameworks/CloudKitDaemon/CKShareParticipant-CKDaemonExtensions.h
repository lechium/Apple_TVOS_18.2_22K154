//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKShareParticipant.h>

@interface CKShareParticipant (CKDaemonExtensions)
- (void)_decryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 inShareWithID:(id)arg2 pcsManager:(id)arg3;	// IMP=0x0060000000040e80
- (void)_encryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 inShareWithID:(id)arg2 pcsManager:(id)arg3;	// IMP=0x0060000000040a79
- (_Bool)hasEncryptedPersonalInfo;	// IMP=0x00600000000409fd
@end

