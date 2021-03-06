/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PHImportExceptionRecorder.h>
@class NSMutableArray;


@protocol PHImportExceptionRecorder <NSObject>
@property (nonatomic,readonly) NSMutableArray * exceptions; 
@required
-(NSMutableArray *)exceptions;
-(id)addExceptionWithType:(long long)arg1 path:(id)arg2 underlyingError:(id)arg3 file:(char*)arg4 line:(unsigned long long)arg5;
-(void)addException:(id)arg1;
-(void)addExceptions:(id)arg1;
-(id)logForExceptions;

@end


@class NSMutableArray, NSString;

@interface PHImportExceptionRecorder : NSObject <PHImportExceptionRecorder> {

	NSMutableArray* _exceptions;

}

@property (nonatomic,readonly) NSMutableArray * exceptions;              //@synthesize exceptions=_exceptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSMutableArray *)exceptions;
-(id)addExceptionWithType:(long long)arg1 path:(id)arg2 underlyingError:(id)arg3 file:(char*)arg4 line:(unsigned long long)arg5 ;
-(void)addException:(id)arg1 ;
-(void)addExceptions:(id)arg1 ;
-(id)logForExceptions;
-(void)logErrors;
@end

