//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class JaliscoImporter, NSDictionary, NSString;

@interface JaliscoUpdateOperation
{
    long long _reason;	// 8 = 0x8
    JaliscoImporter *_importer;	// 16 = 0x10
    _Bool _initialImport;	// 24 = 0x18
    NSString *_powerEventBeginName;	// 32 = 0x20
    NSString *_powerEventEndName;	// 40 = 0x28
    NSDictionary *_powerEventPayload;	// 48 = 0x30
}

+ (id)oversizeLogCategory;	// IMP=0x00200000001096c4
+ (id)logCategory;	// IMP=0x00100000001095af
- (void).cxx_destruct;	// IMP=0x002000000010945c
@property(copy, nonatomic) NSDictionary *powerEventPayload; // @synthesize powerEventPayload=_powerEventPayload;
@property(copy, nonatomic) NSString *powerEventEndName; // @synthesize powerEventEndName=_powerEventEndName;
@property(copy, nonatomic) NSString *powerEventBeginName; // @synthesize powerEventBeginName=_powerEventBeginName;
@property(readonly, nonatomic, getter=isInitialImport) _Bool initialImport; // @synthesize initialImport=_initialImport;
@property(readonly, nonatomic) float updateProgress;
- (void)performUpdate;	// IMP=0x0010000000108b40
- (unsigned int)_serverDatabaseRevision:(unsigned int)arg1;	// IMP=0x0010000000108800
- (void)endPerformUpdate;	// IMP=0x00100000001087fa
- (void)beginPerformUpdate;	// IMP=0x00100000001087f4
- (void)handleSuccess:(long long)arg1;	// IMP=0x001000000010877a
- (id)newImporter;	// IMP=0x00100000001086fd
- (_Bool)preflightImport;	// IMP=0x0010000000108680
- (_Bool)includeHiddenItems;	// IMP=0x0010000000108678
- (long long)localDatabaseRevision;	// IMP=0x00100000001085fb
- (id)queryFilterPercentEscaped;	// IMP=0x001000000010857e
- (void)main;	// IMP=0x0010000000108443
- (void)cancel;	// IMP=0x0010000000108304
- (void)setReason:(long long)arg1;	// IMP=0x00100000001082f3
- (void)setInitialImport:(_Bool)arg1;	// IMP=0x00100000001082e3
- (id)initWithConfiguration:(id)arg1 reason:(long long)arg2 clientIdentity:(id)arg3;	// IMP=0x00100000001080b2
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 reason:(long long)arg3;	// IMP=0x0010000000108097
- (id)initWithReason:(long long)arg1;	// IMP=0x001000000010802c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

