//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RemoteManagementModel/RMModelStatusReason.h>

@interface RMModelStatusReason (Error)
+ (id)assetIsNotReferencedByConfiguration:(id)arg1;	// IMP=0x001000000006919c
+ (id)configurationIsNotReferencedByAnActivation:(id)arg1;	// IMP=0x0010000000068fb5
+ (id)configurationFailed:(id)arg1;	// IMP=0x0010000000068dce
+ (id)activationFailed:(id)arg1;	// IMP=0x0010000000068be7
+ (id)missingStateForDeclaration:(id)arg1;	// IMP=0x00100000000688c4
+ (id)invalidPayloadForDeclaration:(id)arg1;	// IMP=0x00100000000685a1
+ (id)missingConfigurationIdentifiers:(id)arg1 forActivation:(id)arg2;	// IMP=0x001000000006830c
+ (id)missingAssetIdentifiers:(id)arg1 forConfiguration:(id)arg2;	// IMP=0x0010000000068077
+ (id)predicateEvaluationFailedWithError:(id)arg1 forActivation:(id)arg2;	// IMP=0x00100000000679a6
+ (id)predicateEvaluatedToFalseForActivation:(id)arg1;	// IMP=0x00100000000676ff
+ (id)failedWithUnknownDeclarationType:(id)arg1;	// IMP=0x00100000000675f6
+ (id)failedWithUnknownPayloadKeys:(id)arg1;	// IMP=0x00100000000674ed
@end

