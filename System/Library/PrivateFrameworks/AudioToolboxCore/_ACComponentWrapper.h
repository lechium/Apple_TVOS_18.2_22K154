//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _ACComponentWrapper : NSObject
{
    struct shared_ptr<APComponent> mComponent;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000016c10f
- (id).cxx_construct;	// IMP=0x000000000016cd0b
- (void).cxx_destruct;	// IMP=0x000000000016ccfd
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000016c3a8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000016c13a
- (id)initWithComponent:(void *)arg1;	// IMP=0x000000000016c117

@end

