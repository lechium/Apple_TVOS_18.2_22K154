//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VMUFieldInfo;

__attribute__((visibility("hidden")))
@interface VMUFieldValue : NSObject
{
    VMUFieldInfo *_field;	// 8 = 0x8
    unsigned long long _value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006a860
@property(readonly, nonatomic) unsigned long long value;
@property(readonly, nonatomic) VMUFieldInfo *field;
- (id)initWithField:(id)arg1 value:(unsigned long long)arg2;	// IMP=0x000000000006a7bd

@end

