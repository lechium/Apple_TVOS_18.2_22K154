//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CFPrefsPlistSource
{
    struct __CFString *userIdentifier;	// 64 = 0x40
    struct __CFString *domainIdentifier;	// 72 = 0x48
    struct __CFString *container;	// 80 = 0x50
    _Atomic struct __CFDictionary *_locallySetDict;	// 88 = 0x58
    _Atomic char *accessPath;	// 96 = 0x60
    _Atomic _Bool _isByHost;	// 104 = 0x68
    _Atomic _Bool _volatile;	// 105 = 0x69
    _Atomic _Bool _readonly;	// 106 = 0x6a
    _Atomic _Bool _avoidsDaemonCache;	// 107 = 0x6b
    _Atomic _Bool _restrictedAccess;	// 108 = 0x6c
    _Atomic _Bool _checkedInvalidHome;	// 109 = 0x6d
    _Atomic _Bool _lastWriteFailed;	// 110 = 0x6e
    _Atomic _Bool _observing;	// 111 = 0x6f
    _Atomic _Bool _byteCountLimitExceeded;	// 112 = 0x70
    _Atomic _Bool _directMode;	// 113 = 0x71
    _Atomic _Bool _disableBackup;	// 114 = 0x72
    _Atomic int _fileProtectionClass;	// 116 = 0x74
}

- (void)dealloc;	// IMP=0x00000000001ab365
- (id)alreadylocked_createObserverUpdateMessageWithOperation:(int)arg1 forRole:(int *)arg2;	// IMP=0x00000000001ab243
- (int)alreadylocked_updateObservingRemoteChanges;	// IMP=0x00000000001ab187
- (long long)generationCount;	// IMP=0x00000000001ab08b
- (long long)alreadylocked_generationCount;	// IMP=0x00000000001aafa9
- (_Bool)synchronize;	// IMP=0x00000000001aaf72
- (void)alreadylocked_clearCache;	// IMP=0x00000000001aaee3
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(_Bool *)arg5;	// IMP=0x00000000001a986e
- (id)createRequestNewContentMessageForDaemon:(int)arg1;	// IMP=0x00000000001a923e
- (_Bool)isDirectModeEnabled;	// IMP=0x00000000001a7954
- (void)transitionIntoDirectModeIfNeededWithRetryBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a789f
- (_Bool)isVolatile;	// IMP=0x00000000001a7850
- (id)createSynchronizeMessage;	// IMP=0x00000000001a71f9
- (void)alreadylocked_setPrecopiedValues:(const void **)arg1 forKeys:(const struct __CFString **)arg2 count:(long long)arg3 from:(id)arg4;	// IMP=0x00000000001a6188
- (struct __CFDictionary *)alreadylocked_copyDictionary;	// IMP=0x00000000001a5f86
- (struct __CFArray *)alreadylocked_copyKeyList;	// IMP=0x00000000001a5e94
- (void *)copyValueForKey:(struct __CFString *)arg1;	// IMP=0x00000000001a5e4b
- (void *)alreadylocked_copyValueForKey:(struct __CFString *)arg1;	// IMP=0x00000000001a5b42
- (void)setDaemonCacheEnabled:(_Bool)arg1;	// IMP=0x00000000001a5b34
- (void)setAccessRestricted:(_Bool)arg1;	// IMP=0x00000000001a5b29
- (void)setFileProtectionClass:(int)arg1;	// IMP=0x00000000001a5b1e
- (void)setBackupDisabled:(_Bool)arg1;	// IMP=0x00000000001a5b13
- (id)initWithDomain:(struct __CFString *)arg1 user:(struct __CFString *)arg2 byHost:(_Bool)arg3 containerPath:(struct __CFString *)arg4 containingPreferences:(id)arg5;	// IMP=0x00000000001a5a48
- (_Bool)isByHost;	// IMP=0x00000000001a5a3b
- (struct __CFString *)container;	// IMP=0x00000000001a5a2f
- (struct __CFString *)domainIdentifier;	// IMP=0x00000000001a5917
- (struct __CFString *)userIdentifier;	// IMP=0x00000000001a5854

@end

