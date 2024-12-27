//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MPServerObjectDatabaseEntityType : NSObject
{
    NSString *_serverEntityType;	// 8 = 0x8
    NSString *_genericObjectRelationshipKey;	// 16 = 0x10
}

+ (id)entityTypeWithServerEntityType:(id)arg1 genericObjectRelationshipKey:(id)arg2;	// IMP=0x00600000000868e1
- (void).cxx_destruct;	// IMP=0x00000000000868b9
@property(readonly, copy, nonatomic) NSString *genericObjectRelationshipKey; // @synthesize genericObjectRelationshipKey=_genericObjectRelationshipKey;
@property(readonly, copy, nonatomic) NSString *serverEntityType; // @synthesize serverEntityType=_serverEntityType;

@end

