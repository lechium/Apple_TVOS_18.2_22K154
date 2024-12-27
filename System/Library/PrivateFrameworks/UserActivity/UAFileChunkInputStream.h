//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSInputStream.h>

@class NSFileHandle, NSNumber;

__attribute__((visibility("hidden")))
@interface UAFileChunkInputStream : NSInputStream
{
    NSFileHandle *_file;	// 8 = 0x8
    NSNumber *_chunkOffset;	// 16 = 0x10
    long long _chunkSize;	// 24 = 0x18
    NSNumber *_currentOffset;	// 32 = 0x20
    long long _readSize;	// 40 = 0x28
    unsigned long long _status;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000003659f
@property unsigned long long status; // @synthesize status=_status;
@property long long readSize; // @synthesize readSize=_readSize;
@property(retain) NSNumber *currentOffset; // @synthesize currentOffset=_currentOffset;
@property long long chunkSize; // @synthesize chunkSize=_chunkSize;
@property(retain) NSNumber *chunkOffset; // @synthesize chunkOffset=_chunkOffset;
@property(retain) NSFileHandle *file; // @synthesize file=_file;
- (id)streamError;	// IMP=0x00000000000364bc
- (unsigned long long)streamStatus;	// IMP=0x00000000000364aa
- (void)close;	// IMP=0x0000000000036493
- (void)open;	// IMP=0x0000000000036455
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000003644d
- (id)propertyForKey:(id)arg1;	// IMP=0x0000000000036445
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;	// IMP=0x000000000003643d
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x0000000000036098
- (_Bool)hasBytesAvailable;	// IMP=0x0000000000036038
- (id)initWithFileHandle:(id)arg1 offsetInFile:(id)arg2 size:(long long)arg3;	// IMP=0x0000000000035f55

@end

