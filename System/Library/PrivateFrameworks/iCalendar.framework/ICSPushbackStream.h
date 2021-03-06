/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ICSInputByteStream.h>

@protocol ICSInputByteStream;
@class NSString;

@interface ICSPushbackStream : NSObject <ICSInputByteStream> {

	id<ICSInputByteStream> _underStream;
	char* _pbData;
	int _pbCursor;
	BOOL _readPastEOS;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)eos;
-(char)peek;
-(BOOL)pushBack:(char)arg1 ;
-(id)initWithInputStream:(id)arg1 ;
-(char)read;
-(void)dealloc;
@end

