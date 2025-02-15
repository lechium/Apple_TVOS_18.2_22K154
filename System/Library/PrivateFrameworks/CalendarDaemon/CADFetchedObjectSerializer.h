//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ClientConnection, NSArray, NSDictionary, NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface CADFetchedObjectSerializer : NSObject
{
    ClientConnection *_connection;	// 8 = 0x8
    NSArray *_defaultPropertiesToLoad;	// 16 = 0x10
    NSDictionary *_relatedObjectPropertiesToLoad;	// 24 = 0x18
    NSMutableArray *_wrappers;	// 32 = 0x20
    NSMutableSet *_seenObjectIDs;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000511a0
@property(readonly, nonatomic) NSMutableSet *seenObjectIDs; // @synthesize seenObjectIDs=_seenObjectIDs;
@property(readonly, nonatomic) NSMutableArray *wrappers; // @synthesize wrappers=_wrappers;
@property(readonly, nonatomic) NSDictionary *relatedObjectPropertiesToLoad; // @synthesize relatedObjectPropertiesToLoad=_relatedObjectPropertiesToLoad;
@property(readonly, nonatomic) NSArray *defaultPropertiesToLoad; // @synthesize defaultPropertiesToLoad=_defaultPropertiesToLoad;
@property(readonly, nonatomic) ClientConnection *connection; // @synthesize connection=_connection;
- (id)_fetchedObjectDictionaryForEntity:(void *)arg1;	// IMP=0x0000000000050edd
- (id)_properties:(id)arg1 forEntityIfNotSeen:(void *)arg2 objectExists:(_Bool *)arg3;	// IMP=0x00000000000507b8
@property(readonly, nonatomic) NSArray *fetchedObjectWrappers;
- (id)addEntity:(void *)arg1;	// IMP=0x0000000000050447
- (id)initWithConnection:(id)arg1 defaultPropertiesToLoad:(id)arg2 relatedObjectPropertiesToLoad:(id)arg3;	// IMP=0x0000000000050317
- (id)initWithConnection:(id)arg1 defaultPropertiesToLoad:(id)arg2;	// IMP=0x0000000000050302

@end

