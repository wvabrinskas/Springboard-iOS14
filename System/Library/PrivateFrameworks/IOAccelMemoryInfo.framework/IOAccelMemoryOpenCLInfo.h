/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IOAccelMemoryInfo.framework/IOAccelMemoryInfo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface IOAccelMemoryOpenCLInfo : NSObject {

	int pid;
	NSString* cl_context;
	unsigned long long cl_mem;
	NSString* objectType;
	NSString* objectDescription;
	id _expansionData;

}

@property (assign) int pid; 
@property (retain) NSString * cl_context; 
@property (assign) unsigned long long cl_mem; 
@property (retain) NSString * objectType; 
@property (retain) NSString * objectDescription; 
-(NSString *)objectType;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(id)description;
-(unsigned long long)cl_mem;
-(void)setObjectType:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)objectDescription;
-(void)setObjectDescription:(NSString *)arg1 ;
-(NSString *)cl_context;
-(void)setCl_context:(NSString *)arg1 ;
-(void)setCl_mem:(unsigned long long)arg1 ;
@end

