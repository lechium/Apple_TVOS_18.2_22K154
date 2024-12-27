//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSPersistentContainer;

__attribute__((visibility("hidden")))
@interface VSPersistentContainer : NSObject
{
    long long _modelVersion;	// 8 = 0x8
    NSManagedObjectContext *_viewContext;	// 16 = 0x10
    NSPersistentContainer *_persistentContainer;	// 24 = 0x18
}

+ (id)directoryURL;	// IMP=0x006000000001a192
+ (id)legacyDirectoryURL;	// IMP=0x006000000001a09f
- (void).cxx_destruct;	// IMP=0x000000000001adff
@property(retain, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
@property(retain, nonatomic) NSManagedObjectContext *viewContext; // @synthesize viewContext=_viewContext;
@property(readonly, nonatomic) long long modelVersion; // @synthesize modelVersion=_modelVersion;
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ace0
- (id)developerIdentityProviderFetchRequest;	// IMP=0x000000000001acc7
- (id)insertDeveloperIdentityProviderInContext:(id)arg1;	// IMP=0x000000000001ac7a
- (id)init;	// IMP=0x000000000001ac63
- (id)initWithModelVersion:(long long)arg1;	// IMP=0x000000000001a8e0
- (void)migrateContainerIfNecessary;	// IMP=0x000000000001a474

@end

