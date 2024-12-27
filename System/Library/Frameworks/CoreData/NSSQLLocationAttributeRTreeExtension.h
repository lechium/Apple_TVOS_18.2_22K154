//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSAttributeDescription, NSSQLEntity, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLLocationAttributeRTreeExtension : NSObject
{
    NSObject *_userInfoObject;	// 8 = 0x8
    NSArray *_components;	// 16 = 0x10
    NSSQLEntity *_sqlEntity;	// 24 = 0x18
    NSString *_attributeName;	// 32 = 0x20
    NSString *_rtreeTableName;	// 40 = 0x28
    NSAttributeDescription *_attributeDescription;	// 48 = 0x30
    NSAttributeDescription *_latProp;	// 56 = 0x38
    NSAttributeDescription *_longProp;	// 64 = 0x40
    NSArray *_insertSQLStrings;	// 72 = 0x48
    NSArray *_dropSQLStrings;	// 80 = 0x50
    NSArray *_bulkUpdateSQLStrings;	// 88 = 0x58
}

- (_Bool)validate:(id *)arg1;	// IMP=0x000000000025cfc6
- (_Bool)isEqualToExtension:(id)arg1;	// IMP=0x000000000025cdd3
@property(readonly, nonatomic) NSArray *bulkUpdateSQLStrings;
@property(readonly, nonatomic) NSArray *dropSQLStrings;
@property(readonly, nonatomic) NSArray *insertSQLStrings;
- (void)dealloc;	// IMP=0x000000000025ccf9
- (id)initWithObjectFromUserInfo:(id)arg1 onAttributeNamed:(id)arg2 onEntity:(id)arg3;	// IMP=0x000000000025ca89

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

