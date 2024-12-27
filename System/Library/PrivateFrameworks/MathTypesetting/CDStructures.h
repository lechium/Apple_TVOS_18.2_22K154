//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Named Structures

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct Collection;

struct Config {
    int _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
    _Bool _field5;
};

struct EQKitCacheLRUCounter {
    unsigned long long _field1;
};

struct Manager {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    struct Collection *_field3;
    id _field4;
    struct Version _field5;
    struct EQKitCacheLRUCounter _field6;
};

struct Schemata {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    id _field3;
    id _field4;
};

struct Version {
    unsigned long long _field1;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __wrap_iter<double *> {
    double *_field1;
};

struct _xmlDoc {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlNode *_field7;
    struct _xmlNode *_field8;
    struct _xmlDoc *_field9;
    int _field10;
    int _field11;
    struct _xmlDtd *_field12;
    struct _xmlDtd *_field13;
    struct _xmlNs *_field14;
    char *_field15;
    char *_field16;
    void *_field17;
    void *_field18;
    char *_field19;
    int _field20;
    struct _xmlDict *_field21;
    void *_field22;
    int _field23;
    int _field24;
};

struct _xmlDtd;

struct _xmlNode {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlNode *_field7;
    struct _xmlNode *_field8;
    struct _xmlDoc *_field9;
    struct _xmlNs *_field10;
    char *_field11;
    struct _xmlAttr *_field12;
    struct _xmlNs *_field13;
    void *_field14;
    unsigned short _field15;
    unsigned short _field16;
};

struct _xmlNs {
    struct _xmlNs *_field1;
    int _field2;
    char *_field3;
    char *_field4;
    void *_field5;
    struct _xmlDoc *_field6;
};

struct basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t>> {
    struct __compressed_pair<std::basic_string<wchar_t>::__rep, std::allocator<wchar_t>> {
        struct __rep {
            union {
                struct __short {
                    struct {
                        unsigned int __is_long_:1;
                        unsigned int __size_:7;
                    } ;
                    char __padding_[3];
                    int __data_[5];
                } __s;
                struct __long {
                    struct {
                        unsigned int __is_long_:1;
                        unsigned int __cap_:63;
                    } ;
                    unsigned long long __size_;
                    int *__data_;
                } __l;
                struct __raw {
                    unsigned long long __words[3];
                } __r;
            } ;
        } __value_;
    } __r_;
};

struct deque<EQKitMathMLParserState, std::allocator<EQKitMathMLParserState>> {
    struct __split_buffer<EQKitMathMLParserState *, std::allocator<EQKitMathMLParserState *>> {
        int **__first_;
        int **__begin_;
        int **__end_;
        struct __compressed_pair<EQKitMathMLParserState **, std::allocator<EQKitMathMLParserState *>> {
            int **__value_;
        } __end_cap_;
    } __map_;
    unsigned long long __start_;
    struct __compressed_pair<unsigned long, std::allocator<EQKitMathMLParserState>> {
        unsigned long long __value_;
    } __size_;
};

struct stack<EQKitMathMLParserState, std::deque<EQKitMathMLParserState>> {
    struct deque<EQKitMathMLParserState, std::allocator<EQKitMathMLParserState>> c;
};

struct vector<EQKitTypes::Crossout::Enum, std::allocator<EQKitTypes::Crossout::Enum>> {
    int *__begin_;
    int *__end_;
    struct __compressed_pair<EQKitTypes::Crossout::Enum *, std::allocator<EQKitTypes::Crossout::Enum>> {
        int *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

// Template types
typedef struct __wrap_iter<double *> {
    double *_field1;
} __wrap_iter_8fb6ff7c;

