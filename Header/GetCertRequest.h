//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, SKBuiltinBuffer_t;

__attribute__((visibility("hidden")))
@interface GetCertRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasRandomEncryKey:1;
    unsigned int hasCurrentCertVersion:1;
    unsigned int currentCertVersion;
    BaseRequest *baseRequest;
    SKBuiltinBuffer_t *randomEncryKey;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetCurrentCertVersion:) unsigned int currentCertVersion; // @synthesize currentCertVersion;
@property(readonly, nonatomic) BOOL hasCurrentCertVersion; // @synthesize hasCurrentCertVersion;
@property(retain, nonatomic, setter=SetRandomEncryKey:) SKBuiltinBuffer_t *randomEncryKey; // @synthesize randomEncryKey;
@property(readonly, nonatomic) BOOL hasRandomEncryKey; // @synthesize hasRandomEncryKey;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
