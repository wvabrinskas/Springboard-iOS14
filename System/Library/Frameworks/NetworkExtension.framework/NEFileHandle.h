/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSFileHandle;

@interface NEFileHandle : NSObject {

	BOOL _launchOwnerWhenReadable;
	NSFileHandle* _handle;

}

@property (readonly) unsigned long long type; 
@property (readonly) NSObject*<OS_xpc_object> dictionary; 
@property (readonly) BOOL launchOwnerWhenReadable;                     //@synthesize launchOwnerWhenReadable=_launchOwnerWhenReadable - In the implementation block
@property (readonly) NSFileHandle * handle;                            //@synthesize handle=_handle - In the implementation block
+(id)fileHandleFromDictionary:(id)arg1 ;
-(id)initFromDictionary:(id)arg1 ;
-(NSFileHandle *)handle;
-(NSObject*<OS_xpc_object>)dictionary;
-(BOOL)launchOwnerWhenReadable;
-(unsigned long long)type;
-(id)initWithFileDescriptor:(int)arg1 launchOwnerWhenReadable:(BOOL)arg2 ;
@end

