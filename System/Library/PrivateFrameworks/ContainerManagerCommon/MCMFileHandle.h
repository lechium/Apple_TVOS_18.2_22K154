//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSNumber, NSString;
@protocol MCMFileHandle_Private;

__attribute__((visibility("hidden")))
@interface MCMFileHandle : NSObject
{
    _Bool _openLazily;	// 8 = 0x8
    _Bool _open;	// 9 = 0x9
    _Bool _invalid;	// 10 = 0xa
    unsigned short _createMode;	// 12 = 0xc
    int _fd;	// 16 = 0x10
    int _flags;	// 20 = 0x14
    NSString *_path;	// 24 = 0x18
    id <MCMFileHandle_Private> _relativeToFileHandle;	// 32 = 0x20
    unsigned long long _direction;	// 40 = 0x28
    unsigned long long _symlinks;	// 48 = 0x30
    NSNumber *_createDPClass;	// 56 = 0x38
    NSError *_openError;	// 64 = 0x40
}

+ (long long)compareDataProtectionClassTarget:(id)arg1 withExisting:(id)arg2;	// IMP=0x001000000007b9ed
- (void).cxx_destruct;	// IMP=0x000000000007adc8
@property(nonatomic) _Bool invalid; // @synthesize invalid=_invalid;
@property(readonly, nonatomic) int flags; // @synthesize flags=_flags;
@property(nonatomic, getter=isOpen) _Bool open; // @synthesize open=_open;
@property(retain, nonatomic) NSError *openError; // @synthesize openError=_openError;
@property(nonatomic) int fd; // @synthesize fd=_fd;
@property(readonly, nonatomic) _Bool openLazily; // @synthesize openLazily=_openLazily;
@property(readonly, nonatomic) NSNumber *createDPClass; // @synthesize createDPClass=_createDPClass;
@property(readonly, nonatomic) unsigned short createMode; // @synthesize createMode=_createMode;
@property(readonly, nonatomic) unsigned long long symlinks; // @synthesize symlinks=_symlinks;
@property(readonly, nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(retain, nonatomic) id <MCMFileHandle_Private> relativeToFileHandle; // @synthesize relativeToFileHandle=_relativeToFileHandle;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (int)_openAbsolute;	// IMP=0x000000000007a8fa
- (int)_openRelative;	// IMP=0x000000000007a78f
- (unsigned short)_computeMode;	// IMP=0x000000000007a74d
- (int)_computeFlags;	// IMP=0x000000000007a6e3
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000007a64f
- (_Bool)expectOpenWithError:(id *)arg1;	// IMP=0x000000000007a560
- (_Bool)registerAppContainerForProtectionWithError:(id *)arg1;	// IMP=0x000000000007a537
- (_Bool)checkAppContainerProtection:(_Bool *)arg1 error:(id *)arg2;	// IMP=0x000000000007a506
- (_Bool)removeXattr:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007a364
- (_Bool)setXattr:(id)arg1 valueAsNumber:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007a2c3
- (_Bool)setXattr:(id)arg1 valueAsUUID:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007a222
- (_Bool)setXattr:(id)arg1 valueAsString:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000079ff3
- (id)copyValueAsNumberFromXattr:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000079e23
- (id)copyValueAsUUIDFromXattr:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000079cae
- (id)copyValueAsStringFromXattr:(id)arg1 maxLength:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000079a5c
- (_Bool)setPermissions:(unsigned short)arg1 andOwner:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000797f2
- (_Bool)withOpenFileDoBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000796ec
- (void)close;	// IMP=0x0000000000079636
- (_Bool)openWithError:(id *)arg1;	// IMP=0x000000000007947e
- (id)initWithPath:(id)arg1 relativeToFileHandle:(id)arg2 direction:(unsigned long long)arg3 symlinks:(unsigned long long)arg4 createMode:(unsigned short)arg5 createDPClass:(id)arg6 openLazily:(_Bool)arg7;	// IMP=0x000000000007930b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

