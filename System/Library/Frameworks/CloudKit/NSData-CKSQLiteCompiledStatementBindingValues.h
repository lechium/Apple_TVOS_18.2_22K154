//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (CKSQLiteCompiledStatementBindingValues)
+ (id)CKDataFromBase64URLSafeString:(id)arg1;	// IMP=0x001000000012e96c
+ (id)CKDataWithHexString:(id)arg1;	// IMP=0x001000000012e850
+ (id)CKDataWithHexString:(id)arg1 stringIsUppercase:(_Bool)arg2;	// IMP=0x001000000012e646
- (const void *)cksqlcs_blobBindingValue:(unsigned long long *)arg1 destructor:(CDUnknownFunctionPointerType *)arg2 error:(id *)arg3;	// IMP=0x0010000000124686
- (long long)CKCompare:(id)arg1;	// IMP=0x001000000012eb7e
- (id)CKSHA256;	// IMP=0x001000000012ea91
- (id)CKBase64URLSafeString;	// IMP=0x001000000012e864
- (id)CKUppercaseHexStringWithoutSpaces;	// IMP=0x001000000012e5ab
- (id)CKLowercaseHexStringWithoutSpaces;	// IMP=0x001000000012e510
- (id)CKHexString;	// IMP=0x001000000012e478
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;	// IMP=0x0010000000130d2e
- (void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x001000000023f363
- (void)CKDescribePropertiesUsing:(id)arg1;	// IMP=0x00100000002bb84f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

