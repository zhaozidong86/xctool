//
// Copyright 2013 Facebook
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import <Foundation/Foundation.h>

#import "DTiPhoneSimulatorRemoteClient.h"

@interface SimulatorLauncher : NSObject <DTiPhoneSimulatorSessionDelegate>
{
@public
  BOOL _didQuit;
  BOOL _didFailToStart;
  BOOL _didStart;
  DTiPhoneSimulatorSession *_session;
  NSError *_didEndWithError;
}

@property (nonatomic, retain) NSError *launchError;
@property (nonatomic, retain) NSNumber *launchTimeout;

+ (void)loadAllPlatforms;
- (id)initWithSessionConfig:(DTiPhoneSimulatorSessionConfig *)sessionConfig
                 deviceName:(NSString *)deviceName;
- (BOOL)launchAndWaitForExit;
- (BOOL)launchAndWaitForStart;

@end
