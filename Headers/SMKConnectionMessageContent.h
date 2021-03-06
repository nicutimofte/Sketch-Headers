//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SMKMessageCoding.h"

@class NSDictionary, NSString;

@interface SMKConnectionMessageContent : NSObject <SMKMessageCoding>
{
    BOOL _supportsURLRequests;
    NSString *_token;
    NSString *_device;
    unsigned long long _serverPort;
    NSString *_serverName;
}

@property(nonatomic) BOOL supportsURLRequests; // @synthesize supportsURLRequests=_supportsURLRequests;
@property(nonatomic) NSString *serverName; // @synthesize serverName=_serverName;
@property(nonatomic) unsigned long long serverPort; // @synthesize serverPort=_serverPort;
@property(retain, nonatomic) NSString *device; // @synthesize device=_device;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

