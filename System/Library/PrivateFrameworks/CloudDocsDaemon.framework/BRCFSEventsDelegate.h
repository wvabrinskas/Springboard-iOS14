/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BRCFSEventsDelegate <NSObject>
@required
-(void)fseventAtPath:(id)arg1 flags:(unsigned)arg2 options:(unsigned long long)arg3 unresolvedLastPathComponent:(id)arg4;
-(void)fseventAtPath:(id)arg1 flags:(unsigned)arg2;
-(void)fseventAtPath:(id)arg1 flags:(unsigned)arg2 unresolvedLastPathComponent:(id)arg3;
-(void)fseventRecursiveAtRoot:(id)arg1 withReason:(id)arg2;

@end

