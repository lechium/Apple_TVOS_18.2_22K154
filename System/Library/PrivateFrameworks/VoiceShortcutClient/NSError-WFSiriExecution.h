//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (WFSiriExecution)
+ (id)wfSiriExecutionRequiresShortcutsJrError;	// IMP=0x006000000009af53
+ (id)vc_voiceShortcutErrorWithCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x00600000000b050c
+ (id)vc_partialPersistenceErrorWithPartialErrors:(id)arg1;	// IMP=0x00600000000b0435
+ (id)vc_persistenceErrorWithUnderlyingError:(id)arg1;	// IMP=0x00600000000b041b
+ (id)_vc_voiceShortcutErrorWithCode:(long long)arg1 extraUserInfo:(id)arg2 reason:(id)arg3;	// IMP=0x00600000000b034b
+ (id)vc_voiceShortcutErrorWithCode:(long long)arg1 extraUserInfo:(id)arg2 reason:(id)arg3;	// IMP=0x00600000000b01f8
+ (id)vc_voiceShortcutErrorWithCode:(long long)arg1 reason:(id)arg2;	// IMP=0x00600000000b00d9
+ (id)vc_voiceShortcutErrorWithCode:(long long)arg1 underlyingError:(id)arg2 reason:(id)arg3;	// IMP=0x00600000000aff48
+ (id)wfCancelledStepError;	// IMP=0x00600000000be678
- (_Bool)wf_isRequiresShortcutsJrError;	// IMP=0x001000000009aedf
- (_Bool)vc_isFileAlreadyExists;	// IMP=0x00100000000afe6a
- (_Bool)vc_isFileNotFound;	// IMP=0x00100000000afd78
- (_Bool)wf_isCancelledStepError;	// IMP=0x00100000000be604
@end

