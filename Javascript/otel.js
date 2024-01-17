// initialize instruments statically or in an initializer, a Counter and a Value Recorder
meter = global.Meter(‘my_application”)
requestBytes = meter.NewIntCounter("request.bytes", WithUnit(unit.Bytes))
requestLatency = meter.NewFloatValueRecorder("request.latency", WithUnit(unit.Second))78 // then, in a request handler define the labels that apply to the request9 labels = {“path”: “/api/getFoo/{id}”, “host”: “host.name”}